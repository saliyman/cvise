namespace NS1 {
  namespace NS2 {
    void foo();
  } // NS2
} // NS1
namespace cl = NS1::NS2;
void bar() {cl::foo(); }
