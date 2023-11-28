#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "json.hpp"

using namespace std;

class Variant {
public:
    typedef Variant (*proc_type)(const Variant&, const Variant&);

};
