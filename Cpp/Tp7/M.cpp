#include <iostream>
class M {
 public:  
    M() {
        std::cout << "M::M()" << std::endl;
    }
    ~M() {
        std::cout << "M::~M()" << std::endl;
    }
        M(const M& m) {
        std::cout << "M::M(const M&)" << std::endl;
    }
    M& operator=(const M& x)
    {
        std::cout << "operator=" << std::endl;
        return *this;
    }

};

class F : public M {
    public:
        F() {
            std::cout << "F::F()" << std::endl;
        }  
        ~F() {
            std::cout << "F::~F()" << std::endl;
        }
          
        F(const F& f) {
            std::cout << "F::F(const F&)" << std::endl;
        }
        F& operator=(const F& x)
        {
            M::operator=(x);
            std::cout << "operator=F" << std::endl;
            return *this;
        }
        
};

int main(int, char**) {

  F f1;
  F f2 = f1;
  f1 = f2;

  return 0;
}
