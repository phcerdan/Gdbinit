#include <boost/range/iterator_range.hpp>
#include <vector>
#include <iostream>
using namespace boost;

int main() {
  char buf[] = "Hello World";
  iterator_range<char const*> range(buf, buf + sizeof(buf));
  std::string hola = "hola";
  std::vector<int> vint (2,3);
  std::cout<<vint[0]<<std::endl;
  return range[0];
}
/*
g++ -g3 foo.cpp -I/home/phc/Software/boost/build-debug/include
$ gdb -q a.out
Reading symbols from /home/ruediger/develop/demos/a.out...done.
(gdb) break 12
Breakpoint 1 at 0x4006cb: file /home/ruediger/develop/demos/foo.c++, line 7.
(gdb) run
Starting program: /home/ruediger/develop/demos/a.out

Breakpoint 1, main () at /home/ruediger/develop/demos/foo.c++:8
8         return range[0];
(gdb) p range
$1 = boost::iterator_range<char const*> of length 12 = {72 'H', 101 'e', 108 'l', 108 'l', 111 'o', 32 ' ', 87 'W', 111 'o', 114 'r', 108 'l', 100 'd', 0 '\000'}
*/
