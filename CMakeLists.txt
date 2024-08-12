cmake_minimum_required(VERSION 3.16)

project(InventoryManag VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Sql)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Sql)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        additem.cpp
        additem.h
        additem.ui
        addsupplier.cpp
        addsupplier.h
        addsupplier.ui
        finditem.cpp
        finditem.h
        finditem.ui
        findsupplier.cpp
        findsupplier.h
        findsupplier.ui
        databaseheader.h
        Resource.qrc
    )

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(InventoryManag
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        additem.h additem.cpp additem.ui
        addsupplier.h addsupplier.cpp addsupplier.ui

        finditem.h finditem.cpp finditem.ui
        findsupplier.h findsupplier.cpp findsupplier.ui
        databaseheader.h
        Resource.qrc

    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET InventoryManag APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(InventoryManag SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(InventoryManag
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(InventoryManag PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Sql)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.InventoryManag)
endif()
set_target_properties(InventoryManag PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS InventoryManag
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(InventoryManag)
endif()
