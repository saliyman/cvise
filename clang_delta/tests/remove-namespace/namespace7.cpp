namespace NS1 {
  namespace NS2 {
    void foo() {}
  } // NS2
} // NS1
namespace NS3 {
  using namespace NS1;
  void bar() { NS2::foo(); }
} // NS3
