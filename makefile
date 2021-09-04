# Makefiles use a "target" system, which is somewhat like a goto statement.
# default signifies that this is the default target to execute
# In this case, our default runs the command "g++ main.cpp -o out", which is to tell g++ to compile main.cpp and output it in main.exe (extension autodetermined?)

default:
	g++ main.cpp -o main


	