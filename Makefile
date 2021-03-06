AMP = @

CC = ${AMP}gcc
CC_FLAGS = -fPIC -Wall

INCLUDE_FLAG = -Iinclude
LINK_FLAG = -lvec

AR = ${AMP}ar
RM = ${AMP}rm -f

VEC_NAMES = 
VEC_NAMES += types
VEC_NAMES += genesis
VEC_NAMES += crud
VEC_NAMES += cursor
VEC_NAMES += search
VEC_NAMES += order
VEC_NAMES += ranges
VEC_NAMES += deep_ranges
VEC_NAMES += magic_defaults
VEC_NAMES += magic
VEC_NAMES += print
VEC_NAMES += vec

VEC_OBJ_NAMES = ${addsuffix .o, ${VEC_NAMES}}
VEC_OBJS = ${addprefix build/, ${VEC_OBJ_NAMES}}



VEC_EXAMPLE_NAMES = 
VEC_EXAMPLE_NAMES += points

VEC_EXAMPLE_EXES = ${addprefix build/examples/, ${VEC_EXAMPLE_NAMES}}



VEC_STATIC_LIB = build/libvec.a
VEC_DYNAMIC_LIB = build/libvec.so

MAIN_SRC = src/main.c
MAIN_OBJ = build/main.o

BIN = build/vec

default: clean lib examples ${BIN}

lib: ${VEC_STATIC_LIB} ${VEC_DYNAMIC_LIB}

examples: ${VEC_EXAMPLE_EXES}

debug:
	${eval AMP := }

${BIN}: ${MAIN_OBJ} ${VEC_OBJS}
	${CC} $^ -o $@

${MAIN_OBJ}: ${MAIN_SRC}
	${CC} -c ${CC_FLAGS} $< -o $@ ${INCLUDE_FLAG}

${VEC_OBJS}: build/%.o: lib/%.c include/vec/%.h
	${CC} -c ${CC_FLAGS} $< -o $@ ${INCLUDE_FLAG}

${VEC_EXAMPLE_EXES}: build/examples/%: examples/%.c
	${CC} -o ${CC_FLAGS} $< -o $@ ${INCLUDE_FLAG} ${VEC_STATIC_LIB}

${VEC_STATIC_LIB}: ${VEC_OBJS}
	${AR} rcs $@ $^

${VEC_DYNAMIC_LIB}: ${VEC_OBJS}
	${CC} -shared $^ -o $@

redo: clean default

run: ${BIN}
	@${BIN}

move:
	sudo cp ${BIN} /usr/bin

clean:
	${RM} ${BIN}
	${RM} ${MAIN_OBJ}
	${RM} ${VEC_OBJS}
	${RM} ${VEC_STATIC_LIB}
	${RM} ${VEC_DYNAMIC_LIB}
	${RM} ${VEC_EXAMPLE_EXES}


