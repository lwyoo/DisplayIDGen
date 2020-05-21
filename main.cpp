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
#include <stdlib.h>
#include <zlib.h>

#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#define DISP_ID_FIND "#define eDispId_"
#define FIDL_ID_FIND "eDispId_RENAME_"
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

void search(vector<string>& v, string& word)
{

    for (int i = 0; i < v.size(); i++) {
        int index = v[i].find(word);
        if (index != -1) {
            cout << "line " << setw(3) << i + 1 << " : " << v[i] << endl;
        }
    }
}
void search2(vector<string>& v, string& word)
{

    cout << "serch word [" << word << "] << endl";
    for (int i = 0; i < v.size(); i++) {
        int index = v[i].find(word);
        if (index != -1) {
            //            cout << "line " << setw(3) << i+1 << " : " << v[i] << endl;
            cout << "dldyddn : " << v[i].substr(word.length(), v[i].length() - word.length()) << endl;
        }
    }
}

void search3(vector<string>& v, string& word)
{

    cout << "serch word [" << word << "] << endl";
    for (int i = 0; i < v.size(); i++) {
        int index = v[i].find(word);
        if (index != -1) {
            string temp = v[i].substr(word.length(), v[i].length() - word.length());
            int endPos = temp.find("(");
            cout << temp.substr(0, endPos) << endl;
        }
    }
}

void search3_1(vector<string>& v, string& word, map<string, string>& out)
{

    cout << "serch word [" << word << "] << endl";
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

            cout << "keyStr : " << keyStr << "valueStr : " << valueStr << endl;
            out[keyStr] = valueStr;
        }
    }
}

void search4(vector<string>& v, string& endStr, string& word, map<string, string>& out)
{

    cout << "==== serch word [" << word << "] << endl";
    for (int i = 0; i < v.size(); i++) {
        int index = v[i].find(word);
        if (index != -1) {
            //            cout << "find text : " << v[i];
            string temp = v[i].substr(word.length(), v[i].length() - word.length());
            cout << "temp  : " << temp << endl;
            int endPos = temp.find(endStr);
            //            cout << temp.substr(0, endPos) << endl;
            string keyStr = temp.substr(0, endPos);
            cout << "key  : " << keyStr << endl;
        }
    }
}

void search4_1(vector<string>& v, string& endStr, string& word)
{

    cout << "==== serch word [" << word << "] << endl";
    for (int i = 0; i < v.size(); i++) {
        int index = v[i].find(word);
        if (index != -1) {
            //            cout << "find text : " << v[i];
            string temp = v[i].substr(word.length(), v[i].length() - word.length());
            int endPos = temp.find(endStr);
            cout << temp.substr(0, endPos) << endl;
        }
    }
}

void search5(vector<string>& v, string& endStr, string& word, vector<string>& outV)
{

    cout << "==== serch word [" << word << "] << endl";
    for (int i = 0; i < v.size(); i++) {
        int index = v[i].find(word);
        if (index != -1) {
            //            cout << "find text : " << v[i];
            //            string temp = v[i].substr(word.length(), v[i].length() - word.length());
            string temp = v[i].substr(index, v[i].length() - index + word.length());
            int endPos = temp.find(endStr);
            outV.push_back(temp.substr(0, endPos));
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

#if defined(ALL_TEST_READ)
    QFile file(dispHeader);
    QStringList strings;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            strings += in.readLine().split("\n");
        }
    }
    qDebug() << strings;
#endif

#if defined(OFFSET_TEST_READ)
    char buffer[10] = {
        0,
    };

    FILE* fp = fopen(dispHeader.toStdString().c_str(), "r"); // hello.txt 파일을 읽기 모드(r)로 열기.
    // 파일 포인터를 반환

    fseek(fp, 2, SEEK_SET); // 파일 포인터를 파일 처음에서 2바이트만큼 순방향으로 이동시킴
    fread(buffer, 3, 1, fp); // 3바이트만큼 읽음. 3바이트만큼 순방향으로 이동

    printf("%s\n", buffer); // llo

    memset(buffer, 0, 10); // 버퍼를 0으로 초기화

    fseek(fp, 2, SEEK_SET); // 파일 포인터를 현재 위치에서 3바이트만큼 순방향으로 이동시킴
    fread(buffer, 4, 1, fp); // 4바이트만큼 읽음. 4바이트만큼 순방향으로 이동

    printf("%s\n", buffer); // orld

    fclose(fp); // 파일 포인터 닫기

#endif

#if defined(OFFSET_TEST_READ)
    vector<string> v;
    ifstream fin(dispHeader.toStdString());
    fileRead(fin, v);
    string word;
    cout << "enter word to search : ";
    cin >> word;
    search(v, word);
#endif

    /////////////////////
    // Read eDispId.h  //
    /////////////////////
    /// \brief readData
    ///
    vector<string> readDataDisp;
    ifstream fin(dispHeader.toStdString());
    fileRead(fin, readDataDisp);
    string word = DISP_ID_FIND;
    cout << "enter word to search : " << word << endl;

    map<string, string> testValue;
    testValue.clear();
#if define(LOG)
    search3_1(readDataDisp, word, testValue);
    cout << "map size : " << testValue.size() << endl;

    map<string, string>::iterator i;

    for (i = testValue.begin(); i != testValue.end(); i++) {
        cout << " key [" << i->first << "] value [" << i->second << "]" << endl;
    }
    //    search3(readDataDisp, word);
#endif

    /////////////////////
    // Read eDispId.h  //
    /////////////////////
    /// \brief readData
    ///
    //    vector<string> readDataFidl;
    //    ifstream finFidl(dispFidl.toStdString());
    //    fileRead(finFidl, readDataFidl);
    //    string wordFidl = FIDL_ID_FIND;
    //    cout << "enter word to search : " << wordFidl << endl;
    //    string endStr = " =";
    //    //    search4(readDataFidl, endStr, wordFidl);

    //    vector<string> test;
    //    search5(readDataFidl, endStr, wordFidl, test);

    //    string endStr2 = ")";
    //    search4(test, endStr2, wordFidl);
}
