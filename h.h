K _0m(K a);
K _0d(K a,K b);
I ok_0dw(K b);
K _0d_write(K a,K b);
K _0d_read(K a,K b);
K _1m(K x);
K _1m_r(I f,V fixed,V v,V aft,I *b);
K _1d(K x,K y);
K _1d_write(K x,K y);
I wrep(K x,V v,I y);
I disk(K x);
I rep(K x,I y);
K rrep(V v,V aft,I *b,I y);
I rrep_4(S *z,S a,S t);
K _1d_read(K a,K b);
K _1d_char(K x,K y);
K _2m(K a);
K _2m_r(V v,V aft,I *b);
K _2d(K a,K b);
K _3m(K x);
I sendall(I s,S b,I k);
I ksender(I sockfd,K y,I t);
K _3d(K x,K y);
K popen_charvec(C *cmd);
K _4d(K x,K y);
K _4m(K x);
K _5m(K x);
K _5d(K x,K y);
K _6m(K x);
K readVector(K x,I t);
K _6d(K a,K b);
void boilerplate();
K load(S s);
K precision(UI n);
K precision_(void);
K backslash(S s,I n);
K backslash_t(S s);
K workspace(S s);
I expander(S *s,I n);
I appender(S *s,I *n,S t,I k);
#if defined(__MACH__) || defined(__OpenBSD__)
I getdelim(S *s,I *n,I d,FILE *f);
I getdelim(S *s,I *n,I d,FILE *f);
I getline(S *s,I *n,FILE *f);
#endif
extern V KP[sizeof(V)*8+1];
extern C errmsg[256];
K kerr(S s);
I oerr();
extern N SYMBOLS;
extern K KTREE;
extern I SEED;
extern S __d;
extern S PORT;
extern K NIL;
extern S LS;
extern I PP;
extern I PPMAX;
extern C PPON;
I max(I a,I b);
I min(I a,I b);
K X(S s);
K XN(S s,I n);
K KX(K x);
I OOM_CD(I g,...);
K cd(K a);
K ci(K a);
I bp(I t);
I sz(I t,I n);
I PG();
I nearest(I i,I m);
K newK(I t,I n);
V kalloc(I k);
V amem(I k);
V unpool(I r);
I cl2(I v);
I lsz(I k);
I repool(V v,I r);
I kexpander(K *p,I n);
K kapn_(K *a,V *v,I n);
K kapn(K *a,V v,I n);
K kap(K *a,V v);
N newN();
PDA newPDA();
I push(PDA p,C c);
C peek(PDA p);
C pop(PDA p);
C bottom(PDA p);
void pdafree(PDA p);
K Ki(I x);
K Kf(F x);
K Kc(C x);
K Ks(S x);
K Kd();
K Kn();
K Kv();
K newEntry(S s);
K newE(S s,K k);
S sdup(S s);
S strdupn(S s,I k);
I strlenn(S s,I k);
I FC(F a,F b);
F FF(F f);
I StoI(S s,I *n);
I SC(S a,S b);
S sp(S k);
S spn(S s,I n);
I rp2(I v);
K kclone(K a);
K collapse(K x);
K demote(K a);
K promote(K a);
I simpleString(S a);
I KC(K a,K b);
K distributionGrade(K a,I r,I u,I v);
K charGrade(K a,I r);
I mergerComparer(K a,I r,I i,I j);
void merger(K a,I r,K x,K y,I s,I t,I m);
void doMergeGrade(K a,I r,K x,K y,I s,I t);
K mergeGrade(K a,I r);
K end();
extern V ends[];
I bk(V p);
extern C ac[];
K over();
K scan();
K each();
K eachright();
K eachleft();
K eachpair();
extern V adverbs[];
extern C vc[];
extern V vm[];
extern V vd[];
extern V vm0[];
extern V vd0[];
extern V addressSSR,addressWhat,addressAt,addressDot,addressColon;
extern S IFS[3];
extern S IFP[3];
I stringHasChar(S s,C c);
I charpos(S s,C c);
C verbsChar(V p);
I isCharVerb(C c);
I charsVerb(C c);
C adverbsChar(V p);
I isCharAdverb(C c);
I charsAdverb(C c);
I sva(V p);
I adverbClass(V p);
I specialValence(V p);
I valence(V p);
I isescape(UC c);
I needspt0(F f);
int splitprint(V u,const char *s,...);
void printAtDepth(V u,K a,I d,I x,I vdep,I b);
K show(K a);
K dv_ex(K a,V *p,K b);
K vf_ex(V q,K g);
I VA(V p);
V ex_(V a,I r);
K ex(K a);
K ex0(V *v,K k,I r);
K bv_ex(V *p,K k);
K ex1(V *w,K k);
K ex2(V *v,K k);
I randomBits();
void seedPRNG(I s);
I prompt(I n);
I lines(FILE *f);
I line(FILE *f,S *a,I *n,PDA *p);
void *get_in_addr(struct sockaddr *sa);
extern M0 CP[FD_SETSIZE];
I wipe_tape(I i);
I close_tape(I i);
K read_tape(I i,I type);
K modified_execute(K x);
extern fd_set master;
I attend();
I args(int n,S *v);
extern K KFIXED;
I kinit();
V ptf(V v);
int main(int argc,S *argv);
#if defined(DEBUG)
void tf(N n);
extern I kreci;
extern V krec[1000000];
I CV(K v);
#endif
void finally();
void init_genrand64(unsigned long long seed);
unsigned long long genrand64_int64(void);
double genrand64_real2(void);
I formed_group(C c);
extern S formed_dfa;
extern S left;
extern S right;
C flop(C c);
I parsedepth(PDA p);
I complete(S a,I n,PDA *q,I *marks);
I mark_symbol(S s,I n,I i,I *m);
I isalnum_(C c);
I isalnumdot_(C c);
I mark_name(S s,I n,I i,I *m);
I mark_number(S s,I n,I i,I *m);
I mark_adverb(S s,I n,I i,I *m);
I mark_verb(S s,I n,I i,I *m);
I mark_conditional(S s,I n,I k,I *m);
I mark_end(S s,I n,I i,I *m);
I mark_ignore(S s,I n,I i,I *m);
enum mark_members {MARK_UNMARKED,MARK_IGNORE,MARK_BRACKET,MARK_END,MARK_PAREN,MARK_BRACE,MARK_QUOTE,MARK_SYMBOL,
                  MARK_NAME,MARK_NUMBER,MARK_VERB,MARK_ADVERB,MARK_CONDITIONAL,MARK_COUNT};
typedef enum mark_members mark_members;
I overcount(I *m,I n);
I mark(I *m,I k,I t);
K wd(S s,I n);
K wd_(S s,I n,K *dict,K func);
I isodigit(C c);
I odigitlen3(S s);
C unescape(S s,I *k);
I unescaped_size(S s,I n);
I unescaped_fill(S d,S s,I n);
extern S param_dfa;
I param_gp(C c);
I param_validate(S s,I n);
I capture(S s,I n,I k,I *m,V *w,I *d,K *locals,K *dict,K func);
K XDB(S t);
F sqr(F x);
K math(F(*f)(F),K a);
extern _MATH;
extern S n_s;
extern S vm_s[];
extern S vd_s[];
extern S vt_s[];
extern V vn_[];
extern V vm_[];
extern V vd_[];
extern V vt_[];
K _abs(K a);
I net(K x);
K _bd(K x);
K _ceiling(K a);
K _ci(K a);
K _db(K x);
K _dj(K a);
K _getenv(K a);
K _host(K a);
K _ic(K a);
K _jd(K a);
K _lt(K a);
K _ltime(K a);
I stat_sz(S u,I *n);
K _size(K a);
K _bin(K x,K y);
K _draw(K a,K b);
void vitter_a(I *a,I n,I N,I j);
void vitter(I *a,I n,I N);
K _lsq(K a,K b);
F radius(F u,F v);
void svdcmp(F **a,I m,I n,F *w,F **v,F *t);
K _setenv(K a,K b);
K _sm(K a,K b);
K _ss(K a,K b);
S rangematch(S p,C t,S r);
K _t();
K _T();
K _n();
K _h();
K _d();
K _v();
K _i();
K _f();
K _s();
K _p();
K _w();
K _u();
K _a();
K _k();
K _m();
I CIX(K a,I i,K x);
I binr(K a,I b,I c,K x);
F RF();
extern I k_epoch_offset;
K _dot_t();
I jdn_from_date(I year,I month,I day);
I date_from_jdn(I j);
extern I passed;
extern I tests;
extern I test_print;
extern F testtime;
S ts(I x);
I tp(I x);
I tc(S a,S b);
I test();
I testsIO();
I tests02();
I tests01();
I testsBook();
S CSK(K x);
K formKsCS(S s);
K formKiCS(S s);
K formKfCS(S s);
K formatS(S x);
K formatF(F x,I y,I c);
K formatI(I x);
K format(K a);
extern I NI[];
extern F ni[];
I TNI(I p,C h);
I parseNI(S s,I n);
K dollar(K a,K b);
K itemAtIndex(K a,I i);
S glueSS(S c,S d);
K glue(K a,K b);
K DI(K d,I i);
S ES(K d);
K DE(K d,S b);
K *EIA(K a,I i);
K *EVP(K e);
K *EAP(K e);
K EV(K e);
K *denameS(S dir_string,S t);
K *denameD(K *d,S t);
K *denameRecurse(K *p,S t,I create);
K lookupEntryOrCreate(K *p,S k);
K *lookupEVOrCreate(K *p,S k);
K lookup(K a,S b);
K at_verb(K a,K b);
K at(K x,K y);
I updateIndex(K *p,I x,K r);
I isColonDyadic(K x);
K specialAmendDot(K c,K args);
K at_ref(K *p,K b,K c,K y);
K at_tetradic(K a,K b,K c,K y);
K colon_monadic(K a);
K colon_dyadic(K a,K b);
K of2(K d,K *x,K *y,I s);
K of(K a,K b);
K dot(K a,K b);
K dot_ref(K *p,K *x,K *z,I s,K c,K y);
K dot_tetradic_2(K *g,K b,K c,K y);
K dot_tetradic(K a,K b,K c,K y);
K make(K a);
K unmake(K a);
K makeable(K a);
K dot_monadic(K x);
S notsp(S a);
K not_attribute(K a);
K find(K a,K b);
F num_ex(K a,F x);
I isShallowNumeric(K k);
F ithFloat(K k,I i);
F inverter(K a,K b,K c,I index);
K what_triadic(K a,K b,K c);
K qrand(K a,K b);
K sample(K x,K y);
K what(K x,K y);
I matchI(K a,K b);
K enlist(K x);
K grade_updown(K a,I r);
K grade_up(K a);
K grade_down(K a);
K lessmore(K a,K b,I x);
K less(K a,K b);
K more(K a,K b);
K match(K a,K b);
K range(K a);
K group(K x);
I VAT(I i);
K flip(K a);
K first(K a);
K reshaper(K a,K b,I d,I f,I *p);
K reshape(K a,K b);
K take(K a,K b);
K take_reshape(K a,K b);
void shapeCheck(K a,K p,I d);
I firstDepth(K x);
K shape(K a);
K floor_ceil(K a,F(*g)(F));
K floor_verb(K a);
K dp(K *z,K(*f)(K,K),K x,K y);
K equals(K a,K b);
K rotate(K a,K b);
K mod(K a,K b);
K rotate_mod(K a,K b);
K drop(K a,K b);
K cut(K a,K b);
K drop_cut(K a,K b);
K power(K a,K b);
K where(K x);
K reverse(K a);
I atomI(K a);
K atom(K a);
I countI(K a);
K count(K a);
K join(K a,K b);
K enumerate(K a);
K plus(K a,K b);
K times(K a,K b);
K minus(K a,K b);
K negate(K x);
K divide(K a,K b);
K reciprocal(K x);
K min_and(K a,K b);
K max_or(K a,K b);
#define INTERFACE 0
#define EXPORT_INTERFACE 0
#define LOCAL_INTERFACE 0
#define EXPORT
#define LOCAL static
