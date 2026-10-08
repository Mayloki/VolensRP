#if defined rich_included
#endinput
#endif
#define rich_included

// TEST STUB for compilation only (real rich.inc pending)
stock Rich(const string[])
{
new ret[256];
format(ret, sizeof(ret), "%e", string);
return ret;
}
