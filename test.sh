#make ; ./DisplayGen -o qq.o  eDispId.h
qmake -r ; make ; ./DisplayGen -o  DispIdStructTable.cpp eDispId.h McuManagerTypes.hpp 
#qmake -r ; make ; ./DisplayGen -o  DispIdStructTable.cpp test.h McuManagerTypes.hpp 

