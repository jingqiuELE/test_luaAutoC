#include "lautoc.h"
#include "lua.h"
#include "arithmatic.h"


static const struct luaL_reg mylib [] = 
{
    {"add_int", l_addint},
    {"add_complex", l_addcomplex},
    {NULL, NULL}  /* sentinel */
};

static int l_addint (lua_State *L)
{
    luaA_call(add_int);
}

int luaopen_arithmatic (lua_State *L) 
{
    luaA_open(L);
    luaA_struct(L, Complex);
    luaA_struct_member(L, Complex, real_part, float);
    luaA_struct_member(L, Complex, virtual_part, float);

    luaA_function(add_int, int);
    luaA_function(add_complex, Complex, void);

    luaL_openlib(L, "arithmatic", my_arithmatic, 0);
    return 1;
}


