namespace NS1 {
  void foo();
}
namespace cl = NS1;
void bar() {cl::foo(); }
