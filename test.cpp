#include <iostream>
#include <boost/signals2/signal.hpp>

//[ hello_world_def_code_snippet
struct HelloWorld
{
  void operator()() const
  {
    std::cout << "Hello, World!" << std::endl;
  }
};
//]

int main()
{
//[ hello_world_single_code_snippet
  // Signal with no arguments and a void return value
  boost::signals2::signal<void ()> sig;

  // Connect a HelloWorld slot
  HelloWorld hello;
  sig.connect(hello);

  // Call all of the slots
  sig();
//]

  return 0;
}
