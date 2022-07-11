#-------------------------------------------------
#
# Project created by QtCreator 2018-05-28T12:31:59
#
#-------------------------------------------------

QT          += core
QT          += gui
QT          += opengl
#QT          += openglextensions
QT          += charts

greaterThan(QT_MAJOR_VERSION, 5): QT += widgets

TARGET       = hpg_dhunter
TEMPLATE     = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES     += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES     += main.cpp \
               hpg_dhunter.cpp \
               files_worker.cpp \
               refgen.cpp

HEADERS     += \
               data_pack.h \
               hpg_dhunter.h \
               files_worker.h \
               refgen.h

FORMS       += \
               hpg_dhunter.ui

OTHER_FILES +=

CONFIG      += C++11

DESTDIR      = $$system(pwd)
OBJECTS_DIR  = $$DESTDIR/Obj


#----------------------------------------------------------------------
#-----------------------------opencl settings----------------------------
#----------------------------------------------------------------------

# path to cuda sdk installation
CUDA_DIR      = /usr/local/cuda

# path to header and libs files
INCLUDEPATH  += $$CUDA_DIR/include
QMAKE_LIBDIR += $$CUDA_DIR/lib64

# cuda architecture
#CUDA_ARCH    = sm_35       # minimum compute capability (version) for dynamic parallelism feature support
CUDA_ARCH     = sm_75
#CUDA_ARCH    = sm_50
#CUDA_ARCH    = sm_52

# libs used in the code
LIBS         += -lOpenCL



DEFINES += __CL_ENABLE_EXCEPTIONS
DEFINES+= __CL_USE_DEPRECATED_OPENCL_1_1_APIS
DEFINES += __GET_PROGRAM_BUILD_INFO_ERRR


