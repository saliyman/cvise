namespace NS1 {
template < typename T > struct A {
  typedef const T & ptype;
};
template < typename T > struct B {
  typedef typename NS1::A < T >::ptype ptype;
};
namespace NS2 {
namespace NS3 {
  template < typename > struct C { };
  struct F:C < int > { F () { } };
  F const m2 = F ();
  C < int >m1 = C < int >();
}
namespace NS3 {
class G:public NS1::NS2::NS3::C < int > {
public:
  NS1::NS2::NS3::C < int >base_t;
  typedef NS1::B < NS1::NS2::NS3::F >::ptype MY_T;
  G (MY_T p1):subj (p1) { }
  NS1::NS2::NS3::F subj;
};
template < typename A, typename B >
NS1::NS2::NS3::C < int >operator>> (C < A > const &, C < B >);
template < typename A, typename B >
NS1::NS2::NS3::C < int >operator| (C < A >, C < B >);
template < typename A >
NS1::NS2::NS3::C < int >operator| (C < A >, int);
template < typename A >
NS1::NS2::NS3::C < int >operator| (C < A >, char *);
C < int >eps_p = C < int >();
}
}
}
namespace cl = NS1::NS2::NS3;
struct H:cl::G {
    H (NS1::NS2::NS3::F const &p1) : cl::G (p1) { }
};
struct D {
  H operator[] (NS1::NS2::NS3::F const &p1) {
    return p1;
  }
};
D var = D ();
namespace NS1 {
namespace NS2 {
namespace NS3 {
  template < typename T > C < int > abc (T);
}
}
}
void foo () {
  var[cl::m2] >> cl::abc (0) >> cl::eps_p >> cl::
                          m1;
}
