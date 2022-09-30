#include "logicfunctions.h"

// Compute xor
void exclusive(bool x, bool y, bool& ans){
    if(x==true && y==true) ans = false;
    else if(x==true && y==false) ans = true;
    else if(x==false && y==true) ans = true;
    else if(x==false && y==false) ans = false;
}

// Compute implication
void implies(bool x, bool y, bool& ans){
    if(x==true){
        if(y==true) ans = true;
        else ans = false;
    }
    else{
        if(y) ans = true;
        else ans = false;
    }
}

// Compute equivalence
void equivalence(bool x, bool y, bool& ans){
    if(x){
        if(y) ans = true;
        else ans = false;
    }
    else{
        if(y) ans = false;
        else ans = true;
    }
}
