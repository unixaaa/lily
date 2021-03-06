#ifndef LILY_KEYWORD_TABLE_H
# define LILY_KEYWORD_TABLE_H

typedef struct {
    const char *name;
    uint64_t shorthash;
} keyword_entry;

keyword_entry constants[] = {
    {"true",         1702195828},
    {"self",         1718379891},
    {"false",        435728179558},
    {"__file__",     6872323072689856351},
    {"__line__",     6872323081280184159},
    {"__function__", 7598807797348065119},
};

#define CONST_TRUE        0
#define CONST_SELF        1
#define CONST_FALSE       2
#define CONST__FILE__     3
#define CONST__LINE__     4
#define CONST__FUNCTION__ 5
#define CONST_LAST_ID     5

keyword_entry keywords[] = {
    {"if",           26217},
    {"do",           28516},
    {"var",          7496054},
    {"for",          7499622},
    {"try",          7959156},
    {"case",         1702060387},
    {"else",         1702063205},
    {"elif",         1718185061},
    {"enum",         1836412517},
    {"while",        435610544247},
    {"raise",        435727982962},
    {"match",        448345170285},
    {"break",        461195539042},
    {"class",        495857003619},
    {"define",       111524889126244},
    {"return",       121437875889522},
    {"except",       128026086176869},
    {"import",       128034844732777},
    {"private",      28556934595048048},
    {"protected",    7310577382525465200},
    {"continue",     7310870969309884259},
};

# define KEY_IF            0
# define KEY_DO            1
# define KEY_VAR           2
# define KEY_FOR           3
# define KEY_TRY           4
# define KEY_CASE          5
# define KEY_ELSE          6
# define KEY_ELIF          7
# define KEY_ENUM          8
# define KEY_WHILE         9
# define KEY_RAISE        10
# define KEY_MATCH        11
# define KEY_BREAK        12
# define KEY_CLASS        13
# define KEY_DEFINE       14
# define KEY_RETURN       15
# define KEY_EXCEPT       16
# define KEY_IMPORT       17
# define KEY_PRIVATE      18
# define KEY_PROTECTED    19
# define KEY_CONTINUE     20
# define KEY_LAST_ID      20

#endif
