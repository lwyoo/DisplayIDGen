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



// ./DisplayGen -c DispStaruc.cpp  eDispId.h .fidl





struct stDispID
{
    int mobis_ID;
    int ivis_ID;
    int grou_label;
};

void ReadDispID() {
// eDispId.h 에서 데이터를 읽어 ListEntry로 반환
}

bool hasEnding (std::string const &fullString, std::string const &ending) {
    if (fullString.length() >= ending.length()) {
        return (0 == fullString.compare (fullString.length() - ending.length(), ending.length(), ending)); //fullString의 길이에서 ending의 길이만큼 뺀 위치부터 같은지 검사
    } else { //fullString의 길이보다 ending의 길이가 긴 경우 -> 항상 거짓
        return false;
    }
}


void readAAAAA(QString filePath) {
    qDebug() << "filePath : " <<  filePath;

}

int main(int argc, char *argv[])
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







    readAAAAA(dispHeader);

    QFile file(dispHeader);
    QStringList strings;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
           QTextStream in(&file);
           while (!in.atEnd()) {
               strings += in.readLine().split(";");
           }
    }




}
