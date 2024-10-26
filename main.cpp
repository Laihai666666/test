
#include "utility/option.h"
using namespace lh::utility;

int main(int argc,char *argv[]) {
    Option opt;
    opt.add("a",Option::OPT_NO);
    opt.add("b",Option::OPT_REQUIRED);
    opt.add("c",Option::OPT_OPTIONAL);
    opt.parse(argc,argv);
    opt.show();
    bool a=opt.get_bool("a");
    int b=opt.get_int("b");
    string c=opt.get_string("c");
    std::cout<<"a="<<a<<",b="<<b<<",c="<<c<<std::endl;
    return 0;
}



