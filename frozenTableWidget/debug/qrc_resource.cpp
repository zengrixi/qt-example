/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.4.2
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // E:/my_git/qt-example/frozenTableWidget/images/vSpacer.png
  0x0,0x0,0x0,0x71,
  0x89,
  0x50,0x4e,0x47,0xd,0xa,0x1a,0xa,0x0,0x0,0x0,0xd,0x49,0x48,0x44,0x52,0x0,
  0x0,0x0,0x4,0x0,0x0,0x0,0x10,0x8,0x6,0x0,0x0,0x0,0x31,0xb6,0xde,0xf3,
  0x0,0x0,0x0,0x38,0x49,0x44,0x41,0x54,0x28,0x53,0x63,0x14,0x4d,0xfa,0xef,0xf9,
  0x9f,0x89,0x61,0x26,0x3,0x3,0x3,0x3,0xe3,0x3f,0x86,0x74,0x46,0x91,0x94,0xff,
  0x8f,0x18,0x19,0x18,0x64,0x41,0x2,0xff,0x19,0x18,0x1e,0x33,0x8a,0xa6,0xfc,0xff,
  0xf,0xe2,0xc0,0xc0,0x50,0x16,0xc0,0xf4,0x1c,0x9a,0xf7,0x1,0x16,0x82,0x2f,0xd5,
  0x1c,0x3c,0xab,0x29,0x0,0x0,0x0,0x0,0x49,0x45,0x4e,0x44,0xae,0x42,0x60,0x82,
  
  
};

static const unsigned char qt_resource_name[] = {
  // images
  0x0,0x6,
  0x7,0x3,0x7d,0xc3,
  0x0,0x69,
  0x0,0x6d,0x0,0x61,0x0,0x67,0x0,0x65,0x0,0x73,
    // vSpacer.png
  0x0,0xb,
  0x9,0x32,0x1b,0xa7,
  0x0,0x76,
  0x0,0x53,0x0,0x70,0x0,0x61,0x0,0x63,0x0,0x65,0x0,0x72,0x0,0x2e,0x0,0x70,0x0,0x6e,0x0,0x67,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
  // :/images
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
  // :/images/vSpacer.png
  0x0,0x0,0x0,0x12,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_resource)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_resource)()
{
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_resource)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_resource)()
{
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_resource)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_resource)(); }
   } dummy;
}