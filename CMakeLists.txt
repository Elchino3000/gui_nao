cmake_minimum_required(VERSION 2.6.4 FATAL_ERROR)

project(interfaz2.1)

find_package(qibuild)

set(CMAKE_CXX_FLAGS "-std=gnu++0x ${CMAKE_CXX_FLAGS}")

qi_create_bin(interfaz2  main.cpp  interfaz2.cpp moc_interfaz2.cpp  )

qi_use_lib(interfaz2 ALCOMMON ALVISION BOOST ALPROXIES OPENCV2_CORE OPENCV2_HIGHGUI OPENCV2_IMGPROC QT_QTGUI QT_QTCORE)
