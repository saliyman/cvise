namespace NS1 { }
namespace NS2 {
  namespace NS1 {
    void foo() {}
  }
  namespace NS3 {
    using NS1::foo;
    void bar() { foo(); }
  }
}
