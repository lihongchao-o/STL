#include <iostream>
#include <vector>
#include <string>
//#include <typeinfo>

using namespace std;

static int bike=1;

class Bicycle {
public:
    // An enum for the Bicycle colors
    enum Colors {
        White = 1,
        Black = 2,
        Red = 3,
        Green = 4,
        Cyan = 5
    };
    // An enum for the Bicycle Company Brand
    enum Brands {
        FengHuang=1,
        BMW=2,
        BYD=3,
        AoDi=4,
        WuLing=5
    };
    /* Constructors */
    Bicycle()
        : brand(Brands(1)), color(Colors(1)), model("FX 10")
    {}
    Bicycle(const Bicycle::Brands& b, const Bicycle::Colors& c, const string& s)
        : brand(Brands(b)), color(Colors(c)), model(s)
    {}
    ~Bicycle() { bike=0; }
    /* Member functions */
    auto info() -> void ;
    const string BrandName(Brands& );
    const string ColorName(Colors& );
private:
    const string model;
    Colors color;
    Brands brand;
};

auto Bicycle::info() -> void {

    cout << "Bicycle #" << bike++ << "\n"
         << "Brand Name : " << BrandName(brand) << "\n"
         << "Model Name : " << model << "\n"
         << "Color      : " << ColorName(color) << "\n\n";
}

const string Bicycle::BrandName(Brands& b) {
    switch(b) {
        case FengHuang:
            return "FengHuang";
            break;
        case BMW:
            return "Eddy Merckx";
            break;
        case BYD:
            return "BYD";
            break;
        case AoDi:
            return "AoDi";
            break;
        case WuLing:
            return "WuLing";
            break;
        default:
            return "[ ]";
            break;
    }
}

const string Bicycle::ColorName(Colors& c) {
    switch(c) {
        case White:
            return "White";
            break;
        case Black:
            return "Black";
            break;
        case Red:
            return "Red";
            break;
        case Green:
            return "Green";
            break;
        case Cyan:
            return "Cyan";
            break;
        default:
            return "[ ]";
            break;
    }
}

int main()
{
    Bicycle bike1;
    Bicycle bike2(Bicycle::Brands(4), Bicycle::Colors(5), "ZV 77");

    bike1.info();
    bike2.info();

    /* Use a little bit STL vector class */
    vector<string> FengHuangBikes{"Dogma F10", "Dogma FS", "Dogma K10", "GAN", "Prince FX"};
    
    for(auto &model : FengHuangBikes) {
        Bicycle *FengHuang = new Bicycle(Bicycle::Brands(1), Bicycle::Colors(1), model );
        FengHuang -> info();
    }
    

    return 0;
}
