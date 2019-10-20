src := $(wildcard *.cpp)
obj := $(subst .cpp,.o,$(src))

ReadingFiles : $(obj)
	g++ -o $@ $^ 

%.o : %.cpp
	g++ -c $^

clean :
	rm -f $(obj) ReadingFiles