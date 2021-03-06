
#define PHALCON_TRIM_LEFT  1
#define PHALCON_TRIM_RIGHT 2
#define PHALCON_TRIM_BOTH  3

/** Fast char position */
extern int zephir_memnstr(const zval *haystack, const zval *needle);
extern int zephir_memnstr_str(const zval *haystack, char *needle, unsigned int needle_length);

/** Function replacement */
extern void zephir_fast_strlen(zval *return_value, zval *str);
extern int zephir_fast_strlen_ev(zval *str);
extern void zephir_fast_strtolower(zval *return_value, zval *str);
extern void zephir_fast_join(zval *result, zval *glue, zval *pieces TSRMLS_DC);
extern void zephir_fast_join_str(zval *result, char *glue, unsigned int glue_length, zval *pieces TSRMLS_DC);
extern void zephir_fast_explode(zval *result, zval *delimiter, zval *str);
extern void zephir_fast_explode_str(zval *result, const char *delimiter, int delimiter_length, zval *str);
extern void zephir_fast_strpos(zval *return_value, const zval *haystack, const zval *needle);
extern void zephir_fast_strpos_str(zval *return_value, const zval *haystack, char *needle, unsigned int needle_length);
extern void zephir_fast_stripos_str(zval *return_value, zval *haystack, char *needle, unsigned int needle_length);
extern void zephir_fast_str_replace(zval *return_value, zval *search, zval *replace, zval *subject);
extern void zephir_fast_trim(zval *return_value, zval *str, int where TSRMLS_DC);
extern void zephir_fast_strip_tags(zval *return_value, zval *str);
extern void zephir_fast_strtoupper(zval *return_value, zval *str);

/** Camelize/Uncamelize */
extern void zephir_camelize(zval *return_value, const zval *str);
extern void zephir_uncamelize(zval *return_value, const zval *str);

/** Starts/Ends with */
extern int zephir_start_with(const zval *str, const zval *compared, zval *ignore_case);
extern int zephir_start_with_str(const zval *str, char *compared, unsigned int compared_length);
extern int zephir_start_with_str_str(char *str, unsigned int str_length, char *compared, unsigned int compared_length);
extern int zephir_end_with(const zval *str, const zval *compared, zval *ignore_case);
extern int zephir_end_with_str(const zval *str, char *compared, unsigned int compared_length);

/** Random string */
extern void zephir_random_string(zval *return_value, const zval *type, const zval *length TSRMLS_DC);

/* Strips extra slashes */
extern void zephir_remove_extra_slashes(zval *return_value, const zval *str);

/** Generates a unique key for an array/object */
extern void zephir_unique_key(zval *return_value, zval *prefix, zval *value TSRMLS_DC);

/** spprintf */
extern int zephir_spprintf(char **message, int max_len, char *format, ...);

/* Substr */
void zephir_substr(zval *return_value, zval *str, unsigned long from, unsigned long length);

/** EOL */
zval *zephir_eol(int eol TSRMLS_DC);

/** Preg-Match */
void zephir_preg_match(zval *return_value, zval *regex, zval *subject, zval *matches TSRMLS_DC);

/** Base64 */
extern void zephir_base64_encode(zval *return_value, zval *data);
extern void zephir_base64_decode(zval *return_value, zval *data);

/** Hash */
void zephir_md5(zval *return_value, zval *str);
