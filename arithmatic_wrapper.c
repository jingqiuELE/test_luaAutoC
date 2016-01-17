luaA_struct(L, Complex);
luaA_struct_member(L, Complex, real_part, float);
luaA_struct_member(L, Complex, virtual_part, float);

luaA_function(add_int, int);
luaA_function(add_complex, Complex, void);
