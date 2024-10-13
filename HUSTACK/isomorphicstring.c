typedef struct {
    int key;
    int val;
    UT_hash_handle hh;
} hash_table;

bool isIsomorphic(char* s, char* t) {
    hash_table *hash = NULL, *hash2 = NULL , *temp, *elem;
    int len_s = strlen(s);
    if(len_s != strlen(t)) {
        return false;
    }
    for (int i = 0; i < len_s; ++i) {
        int c_s = s[i];
        int c_t = t[i];
        HASH_FIND_INT(hash, &c_s, elem);
        if (elem == NULL) {
            elem = malloc(sizeof(hash_table));
            elem->key = c_s;
            elem->val = c_t;
            HASH_ADD_INT(hash, key, elem);
        } else {
            if (elem->val != c_t) {
                return false;
            }
        }
        HASH_FIND_INT(hash2, &c_t, elem);
        if (elem == NULL) {
            elem = malloc(sizeof(hash_table));
            elem->key = c_t;
            elem->val = c_s;
            HASH_ADD_INT(hash2, key, elem);
        } else {
            if (elem->val != c_s) {
                return false;
            }
        }
    }
    return true;

}
