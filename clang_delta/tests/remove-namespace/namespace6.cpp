namespace NS1 { 
  void foo();
}
namespace NS2 {
  using namespace NS1;
  void bar() { NS1::foo(); }
}
