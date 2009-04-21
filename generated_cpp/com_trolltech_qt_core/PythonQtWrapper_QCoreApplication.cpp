#include "PythonQtWrapper_QCoreApplication.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qtranslator.h>

void PythonQtShell_QCoreApplication::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCoreApplication::staticMetaObject,
      "childEvent(QCoreApplication*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QCoreApplication::childEvent(arg__1);
}
void PythonQtShell_QCoreApplication::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCoreApplication::staticMetaObject,
      "customEvent(QCoreApplication*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QCoreApplication::customEvent(arg__1);
}
bool  PythonQtShell_QCoreApplication::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCoreApplication::staticMetaObject,
      "event(QCoreApplication*,QEvent* )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QCoreApplication::event(arg__1);
}
bool  PythonQtShell_QCoreApplication::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCoreApplication::staticMetaObject,
      "eventFilter(QCoreApplication*,QObject* ,QEvent* )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QCoreApplication::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QCoreApplication::notify(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "notify");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCoreApplication::staticMetaObject,
      "notify(QCoreApplication*,QObject* ,QEvent* )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QCoreApplication::notify(arg__1, arg__2);
}
void PythonQtShell_QCoreApplication::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QCoreApplication::staticMetaObject,
      "timerEvent(QCoreApplication*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QCoreApplication::timerEvent(arg__1);
}
qint64  PythonQtWrapper_QCoreApplication::static_QCoreApplication_applicationPid()
{
return QCoreApplication::applicationPid();
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setApplicationVersion(const QString&  version)
{
QCoreApplication::setApplicationVersion(version);
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_applicationName()
{
return QCoreApplication::applicationName();
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_postEvent(QObject*  receiver, QEvent*  event, int  priority)
{
QCoreApplication::postEvent(receiver, event, priority);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setApplicationName(const QString&  application)
{
QCoreApplication::setApplicationName(application);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setOrganizationName(const QString&  orgName)
{
QCoreApplication::setOrganizationName(orgName);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_flush()
{
QCoreApplication::flush();
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setAttribute(Qt::ApplicationAttribute  attribute, bool  on)
{
QCoreApplication::setAttribute(attribute, on);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_removePostedEvents(QObject*  receiver, int  eventType)
{
QCoreApplication::removePostedEvents(receiver, eventType);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_removeLibraryPath(const QString&  arg__1)
{
QCoreApplication::removeLibraryPath(arg__1);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_removeTranslator(QTranslator*  messageFile)
{
QCoreApplication::removeTranslator(messageFile);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_sendPostedEvents(QObject*  receiver, int  event_type)
{
QCoreApplication::sendPostedEvents(receiver, event_type);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_postEvent(QObject*  receiver, QEvent*  event)
{
QCoreApplication::postEvent(receiver, event);
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_organizationName()
{
return QCoreApplication::organizationName();
}

QCoreApplication*  PythonQtWrapper_QCoreApplication::static_QCoreApplication_instance()
{
return QCoreApplication::instance();
}

bool  PythonQtWrapper_QCoreApplication::static_QCoreApplication_testAttribute(Qt::ApplicationAttribute  attribute)
{
return QCoreApplication::testAttribute(attribute);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_processEvents(QEventLoop::ProcessEventsFlags  flags, int  maxtime)
{
QCoreApplication::processEvents(flags, maxtime);
}

bool  PythonQtWrapper_QCoreApplication::static_QCoreApplication_sendEvent(QObject*  receiver, QEvent*  event)
{
return QCoreApplication::sendEvent(receiver, event);
}

bool  PythonQtWrapper_QCoreApplication::event(QCoreApplication* theWrappedObject, QEvent*  arg__1)
{
return  (*((PythonQtPublicPromoter_QCoreApplication*)theWrappedObject)).event(arg__1);
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_applicationDirPath()
{
return QCoreApplication::applicationDirPath();
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_exit(int  retcode)
{
QCoreApplication::exit(retcode);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_processEvents(QEventLoop::ProcessEventsFlags  flags)
{
QCoreApplication::processEvents(flags);
}

bool  PythonQtWrapper_QCoreApplication::static_QCoreApplication_closingDown()
{
return QCoreApplication::closingDown();
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_sendPostedEvents()
{
QCoreApplication::sendPostedEvents();
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setOrganizationDomain(const QString&  orgDomain)
{
QCoreApplication::setOrganizationDomain(orgDomain);
}

int  PythonQtWrapper_QCoreApplication::static_QCoreApplication_exec()
{
return QCoreApplication::exec();
}

bool  PythonQtWrapper_QCoreApplication::notify(QCoreApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2)
{
return  (*theWrappedObject).notify(arg__1, arg__2);
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_applicationFilePath()
{
return QCoreApplication::applicationFilePath();
}

bool  PythonQtWrapper_QCoreApplication::static_QCoreApplication_startingUp()
{
return QCoreApplication::startingUp();
}

QStringList  PythonQtWrapper_QCoreApplication::static_QCoreApplication_libraryPaths()
{
return QCoreApplication::libraryPaths();
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_organizationDomain()
{
return QCoreApplication::organizationDomain();
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_translate(const char*  context, const char*  key, const char*  comment, QCoreApplication::Encoding  encoding)
{
return QCoreApplication::translate(context, key, comment, encoding);
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_translate(const char*  context, const char*  key, const char*  comment, QCoreApplication::Encoding  encoding, int  n)
{
return QCoreApplication::translate(context, key, comment, encoding, n);
}

bool  PythonQtWrapper_QCoreApplication::static_QCoreApplication_hasPendingEvents()
{
return QCoreApplication::hasPendingEvents();
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setLibraryPaths(const QStringList&  arg__1)
{
QCoreApplication::setLibraryPaths(arg__1);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_addLibraryPath(const QString&  arg__1)
{
QCoreApplication::addLibraryPath(arg__1);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_removePostedEvents(QObject*  receiver)
{
QCoreApplication::removePostedEvents(receiver);
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_applicationVersion()
{
return QCoreApplication::applicationVersion();
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_installTranslator(QTranslator*  messageFile)
{
QCoreApplication::installTranslator(messageFile);
}

