all: tmp

tmp: *.cpp
	c++ -Wall -Wextra -Werror *.cpp -std=c++98 -o tmp

clean:
	rm -rf tmp

re: clean all