#include "widget.h"
#include "ui_widget.h"
#include "config.h"
#include <QFileInfo>
#include <QtWebKitWidgets/QWebView>
#include <QWebSettings>

#if _DEBUG
#pragma comment(lib,"Qt5WebKitWidgetsd.lib")
#else
#pragma comment(lib,"Qt5WebKitWidgets.lib")
#endif

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QString qstrmaptype = Config().Get("map","map_type").toString();
    QString qstrurl;
    QString qstrfilepath;
    if(qstrmaptype == "google")
    {
        qstrfilepath = QFileInfo("./googlemap.html").absoluteFilePath();
    }
    else if(qstrmaptype == "baidu")
    {
        qstrfilepath = QFileInfo("./baidumap.html").absoluteFilePath();
    }

    qstrurl = QString("file:///%1").arg(qstrfilepath);
    ui->webView->load(QUrl(qstrurl));
    ui->webView->show();
}

Widget::~Widget()
{
    delete ui;
}
