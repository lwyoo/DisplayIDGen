//#include <QGuiApplication>
//#include <QQmlApplicationEngine>

#include <QCommandLineOption>
#include <QCommandLineParser>
#include <QCoreApplication>
#include <QDebug>
#include <QDirIterator>
#include <QImage>
#include <QOpenGLContext>
#include <QOpenGLFunctions>
#include <QOpenGLTexture>
#include <QtEndian>
#include <fcntl.h>
#include <list>
#include <qopengl.h>
#include <stdio.h>
#include <stdlib.h>"
#include <zlib.h>

#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#define DISP_ID_FIND "#define eDispId_"
#define FIDL_ID_FIND "eDispId_RENAME_"
#define FIDL_ID_FIND_CUSTOM "eDispId_RENAME_Custom_"

#define GROUP_STR "/** Group"
#define GROUP_STR_END " **/"
#define GROUP_STR_FREFIX "McuServiceType::GroupLevel::eDispId_Group_"
#define ENUM_STR_FREFIX "McuServiceType::EnumEventID::"

#define IS_LOG_ENABLE 0
using namespace std;
// ./DisplayGen -c DispStaruc.cpp  eDispId.h .fidl

struct stDispID {
    int mobis_ID;
    int ivis_ID;
    int grou_label;
};

void ReadDispID()
{
    // eDispId.h 에서 데이터를 읽어 ListEntry로 반환
}

bool hasEnding(std::string const& fullString, std::string const& ending)
{
    if (fullString.length() >= ending.length()) {
        return (0 == fullString.compare(fullString.length() - ending.length(), ending.length(), ending)); //fullString의 길이에서 ending의 길이만큼 뺀 위치부터 같은지 검사
    } else { //fullString의 길이보다 ending의 길이가 긴 경우 -> 항상 거짓
        return false;
    }
}

void fileRead(ifstream& fin, vector<string>& v)
{
    string line;

    while (getline(fin, line))
        v.push_back(line);
}

void serarchGroup(vector<string>& v, map<int, string>& out)
{

    map<int, string> groupMap; // line, groupName
    for (int i = 0; i < v.size(); i++) {
        /////////////
        /// group ///
        /////////////
        ///

        string word = GROUP_STR;
        int indexGroup = v[i].find(word);
        if (indexGroup != -1) {
            string tempStr = v[i].substr(word.length(), v[i].length() - word.length());

            int endPos = tempStr.find(GROUP_STR_END);
            string tempStr2 = tempStr.substr(0, endPos);
            tempStr2.erase(remove(tempStr2.begin(), tempStr2.end(), ' '), tempStr2.end());

            int replaceIndex = -1;
            replaceIndex = tempStr2.find("-");
            if (replaceIndex != -1) {
                tempStr2.replace(replaceIndex, 1, "_");
            }

            cout << "line [" << i << "] value [" << tempStr2 << "] " << endl;
            out[i] = GROUP_STR_FREFIX + tempStr2;
        }
    }
}

void search3_2(vector<string>& v, string& word, map<string, pair<string, string>>& out)
{
    map<int, string> groupMap;
    serarchGroup(v, groupMap);
    //    cout << "serch word [" << word << "] << endl";
    for (int i = 0; i < v.size(); i++) {
        int index = v[i].find(word);
        if (index != -1) {
            string temp = v[i].substr(word.length(), v[i].length() - word.length());
            int endPos = temp.find("(");

            //            string valueStr = v[i].substr(index + 8, v[i].length() - word.length());

            int valueIndex = v[i].find("eDispId_");
            string valueStr = v[i].substr(valueIndex, v[i].length() - word.length());
            valueStr.erase(remove(valueStr.begin(), valueStr.end(), ' '), valueStr.end());

            string keyStr = temp.substr(0, endPos);
            keyStr.erase(remove(keyStr.begin(), keyStr.end(), ' '), keyStr.end());

            //            cout << "keyStr : " << keyStr << "valueStr : " << valueStr << endl;

            map<int, string>::iterator it;
            map<int, string>::reverse_iterator rIt = groupMap.rbegin();

            pair<string, string> pairData; //IVIS, group

            string preGroup = "McuServiceType::GroupLevel::eDispId_Group_0";

            for (it = groupMap.begin(); it != groupMap.end(); it++) {
                if ((it->first) > i) {
                    //test code

                    pairData = pair<string, string>(valueStr, preGroup);

                    break;
                }

                if (it == --groupMap.end()) {
                    pairData = pair<string, string>(valueStr, preGroup);
                    //                    cout << "Max Value valueStr : " << valueStr << "preGroup : " << preGroup << endl;
                }

                preGroup = it->second;
            }

            out[keyStr] = pairData;
        }
    }
}

void search5(vector<string>& v, string& endStr, string& word, vector<string>& outV)
{

    for (int i = 0; i < v.size(); i++) {

        //////////////
        ///  text  ///
        //////////////
        int index = v[i].find(word);
        if (index != -1) {
            string temp = v[i].substr(index, v[i].length() - index + word.length());
            int endPos = temp.find(endStr);
            outV.push_back(temp.substr(0, endPos));
        }
    }
}

void search8(vector<string>& v, string& endStr, string& word, map<string, string>& out)
{

    for (int i = 0; i < v.size(); i++) {
        int index = v[i].find(word);
        if (index != -1) {

            string valueStr = v[i].substr(index, v[i].find(endStr));
            //            cout << "rear rm text : " << valueStr << endl;

            int keyIndex = -1;
            keyIndex = valueStr.find(word);
            string keyStr = valueStr.substr(word.length(), valueStr.length() - index);
            cout << "keyStr : " << keyStr << endl;

            out[keyStr] = ENUM_STR_FREFIX + valueStr;
        }
    }
}

int main(int argc, char* argv[])
{
    ///////////
    //  arg  //
    ///////////
    /// \brief 입력 받은 진자 읽기
    /// \return
    ///
    QCoreApplication app(argc, argv);
    QStringList filter;
    QImage b;
    QString outputFilePath("DisplayIDStructTable.cpp ");
    QString codeFilePath("image_rsc_io.cpp");
    QCommandLineParser parser;

    parser.setApplicationDescription("ResourceGen");
    parser.addHelpOption();
    parser.addVersionOption();
    parser.addPositionalArgument("qrc", "The file to open.");

    QCommandLineOption genOutOption(QStringList() << "o"
                                                  << "ouput",
        QObject::tr("Generate the output file to <output_path>"),
        QObject::tr("output_path"));
    parser.addOption(genOutOption);

    parser.process(app);

    if (parser.isSet(genOutOption)) {
        outputFilePath = parser.value(genOutOption);
    }

    QString dispHeader = "";
    QString dispFidl = "";

    foreach (const QString& fileName, parser.positionalArguments()) {
        QString temp = fileName.section(".", -1);
        if (0 == temp.compare("h")) {
            dispHeader = fileName;
        }

        if (0 == temp.compare("hpp")) {
            dispFidl = fileName;
        }
    }

    qDebug() << "dispHeader : " << dispHeader;
    qDebug() << "dispFidl : " << dispFidl;

    /////////////////////
    // Read eDispId.h  //
    /////////////////////
    /// \brief readData
    ///
    cout << "==========READ  eDispId.hpp==========\n\n\n\n";
    vector<string> readDataDisp;
    ifstream fin(dispHeader.toStdString());
    fileRead(fin, readDataDisp);
    string word = DISP_ID_FIND;

    map<string, pair<string, string>> mapHeaderID;
    mapHeaderID.clear();
    search3_2(readDataDisp, word, mapHeaderID);
    //    cout << "map size : " << mapHeaderID.size() << endl;

    map<string, pair<string, string>>::iterator i;
#if IS_LOG_ENABLE
    for (i = mapHeaderID.begin(); i != mapHeaderID.end(); i++) {
        cout << dispHeader.toStdString() << "-  key [" << i->first << "] value [" << i->second.first << "] value [" << i->second.second << "]" << endl;
    }
#endif

    ///////////////////////////////
    // Read McuManagerTypes.hpp  //
    ///////////////////////////////
    /// \brief readData
    ///
    cout << "==========READ  fidl.hpp==========\n\n\n\n";
    vector<string> readDataFidl;
    ifstream finFidl(dispFidl.toStdString());
    fileRead(finFidl, readDataFidl);
    string wordFidl = FIDL_ID_FIND;
    string endStr = " =";

    vector<string> test;
    search5(readDataFidl, endStr, wordFidl, test);

    map<string, string> mapFidlID;
    mapFidlID.clear();

    string endStr2 = ")";
    search8(test, endStr2, wordFidl, mapFidlID);

    cout << "map size : " << mapFidlID.size() << endl;
    string wordFidlCustom = FIDL_ID_FIND_CUSTOM;

    map<string, string> mapFidlIDCustom;
    mapFidlIDCustom.clear();
    search8(test, endStr2, wordFidlCustom, mapFidlIDCustom);

    map<string, string>::iterator it;
#if IS_LOG_ENABLE
    for (it = mapFidlID.begin(); it != mapFidlID.end(); it++) {
        cout << dispFidl.toStdString() << " - key [" << it->first << "] value [" << it->second << "]" << endl;
    }
#endif

    for (it = mapFidlIDCustom.begin(); it != mapFidlIDCustom.end(); it++) {
        cout << dispFidl.toStdString() << " - key [" << it->first << "] value [" << it->second << "]" << endl;
    }

    ////////////////////
    /// data mapping ///
    ////////////////////

    map<string, pair<string, string>> resultData;
    map<string, pair<string, string>>::iterator mobisIt;

    map<string, string>::iterator fidlData;

    // make
    for (mobisIt = mapHeaderID.begin(); mobisIt != mapHeaderID.end(); ++mobisIt) {

        for (fidlData = mapFidlID.begin(); fidlData != mapFidlID.end(); ++fidlData) {
            if (0 == mobisIt->first.compare(fidlData->first)) {
                resultData[mobisIt->second.first] = pair<string, string>(fidlData->second, mobisIt->second.second);
                break;
            }
        }
    }

    for (fidlData = mapFidlIDCustom.begin(); fidlData != mapFidlIDCustom.end(); ++fidlData) {
        string prefixCustom = FIDL_ID_FIND_CUSTOM;
        resultData["static_cast<int>(" + fidlData->second + ")"] = pair<string, string>(fidlData->second, "McuServiceType::GroupLevel::eDispId_Group_Custom");
    }
#if IS_LOG_ENABLE
    for (mobisIt = resultData.begin(); mobisIt != resultData.end(); ++mobisIt) {
        cout << " key [" << mobisIt->first << "] value [" << mobisIt->second.first << "] value [" << mobisIt->second.second << "]" << endl;
    }
#endif
    /////////////////
    /// creat cpp ///
    /////////////////

    QString path = QDir::currentPath();
    int rsc = open(outputFilePath.toLocal8Bit(), O_CREAT | O_RDWR | O_TRUNC, 0644);
    FILE* fpSrc = fopen(outputFilePath.toLocal8Bit(), "w+");
    qint64 base = 0;
    fprintf(fpSrc, "#include \"DispIdStructTable.h\"\n\
namespace cluster { \n\
namespace dispID { \n\
stDispID tableID[] = {\n");

    for (mobisIt = resultData.begin(); mobisIt != resultData.end(); ++mobisIt) {
        fprintf(fpSrc, "    {%s, %s, %s},\n", mobisIt->first.c_str(), mobisIt->second.first.c_str(), mobisIt->second.second.c_str());
    }

    fprintf(fpSrc, "    {%d, 999, 999}\n", 999);
    fprintf(fpSrc, "};\n\n");
    fprintf(fpSrc, "int size_table = sizeof(tableID) / sizeof(tableID[0]);\n\
}\n\
}\n");
    close(rsc);
    fclose(fpSrc);
}
