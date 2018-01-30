cmake_minimum_required(VERSION 3.8)
project(PO_GDeLosRios_A04)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Customer.cpp Customer.h Invoice.cpp Invoice.h InvoiceItem.cpp InvoiceItem.h)
add_executable(PO_GDeLosRios_A04 ${SOURCE_FILES})