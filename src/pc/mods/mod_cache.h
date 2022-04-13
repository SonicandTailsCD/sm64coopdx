#ifndef MOD_CACHE_H

#include "types.h"

struct ModCacheEntry {
    u8 dataHash[16];
    u64 lastLoaded;
    char* path;
    struct ModCacheEntry* next;
};

void mod_cache_shutdown(void);
struct ModCacheEntry* mod_cache_get_from_hash(u8* dataHash);
struct ModCacheEntry* mod_cache_get_from_path(const char* path);
void mod_cache_add(u8* dataHash, u64 lastLoaded, const char* path);
void mod_cache_load(void);
void mod_cache_save(void);

#endif