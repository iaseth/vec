

X.Y.Z | (goals)
--------------------
  * Nothing yet


0.1.3 | (future)
--------------------
  * Added new module: `deep_ranges.h`
  * Implemented `vec_print_slots_compact()`
  * Implemented `vec_shuffle()`
  * Implemented `deep_ranges` methods
  * Added `name` to `vec`
  * Added new module: `search.h`
  * Added new module: `cursor.h`
  * Added setters for magic methods: `vec_set_less_than()`, `vec_set_hash_code()` and `vec_set_to_string()`


0.1.2 | 07-11-2020
--------------------
  * Added new module: `print.h`
  * Implemented `vec_stats()`
  * Moved constructors and destructors to a separate new module: `genesis.h`
  * Added new module: `magic.h`
  * Added new module: `defaults.h` for defining default magic methods
  * Implemented `vec_print()`
  * Implemented `vec_print_slots()`
  * Added new module: `ranges.h`
  * Added `vec_copy()` and `vec_duplicate()`


0.1.1 | 07-11-2020
--------------------
  * Added `cursor`
  * Implemented `vec_length()` and `vec_capacity()` functions
  * Implemented `vec_empty()` and `vec_full()` functions
  * Added magic method fields to `Vec`: `less_than()`, `hash_code()` and `to_string()`
  * Added magic method field `clone()` to allow for creating a duplicate copy of `Vec`
  * Added first `example`: `points.c`
  * Added `vec_free()` to free `vec` elements
  * Added `vec_destroy()` as a shortcut to `vec_free()` then `vec_delete()`
  * Implemented `vec_swap()` and `vec_reverse()`


0.1.0 | 07-11-2020
--------------------
  * Added structs: `Vec` and `VecNamespace`
  * Added typedeffed pointer types: `Vec` and `VecNamespace`
  * Implemented `vec_new`, `vec_new_n` and `vec_delete`
  * Implemented `vec_expand` and `vec_push`
  * Added macro: `foreach_vec` to loop through elements
  * Exporting `vec` as a `struct` of function pointers to keep namespace clean


