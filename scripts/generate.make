#####################################################################
# include this file in your master makefile
# rules to call from master.generate:

##---

FLATMATH_FLATC_CPP_FLAGS=\
	--cpp --scoped-enums --gen-name-strings --gen-object-api \
	-I ../schemas


FLATMATH_FLATC_CPP_FLAGS_READONLY=\
	$(FLATMATH_FLATC_CPP_FLAGS) \
	-o ../include/flatmath/readonly/

FLATMATH_FLATC_CPP_FLAGS_MUTABLE=\
	--gen-mutable \
	$(FLATMATH_FLATC_CPP_FLAGS) \
	-o ../include/flatmath/mutable/

##---

gen_flatbuffer_flatmath_headers: \
	gen_flatbuffer_flatmath_readonly_headers \
	gen_flatbuffer_flatmath_mutable_headers \
	;

gen_flatbuffer_flatmath_readonly_headers:
	@$(PROJECT_SCAFFOLDING)/tools/bin/darwin/flatc \
		$(FLATMATH_FLATC_CPP_FLAGS_READONLY) \
		../schemas/flatmath.fbs

gen_flatbuffer_flatmath_mutable_headers:
	@$(PROJECT_SCAFFOLDING)/tools/bin/darwin/flatc \
		$(FLATMATH_FLATC_CPP_FLAGS_MUTABLE) \
		../schemas/flatmath.fbs

gen_flatbuffer_flatmath_schema_headers:
	@$(PROJECT_SCAFFOLDING)/tools/bin/darwin/bin2c \
		-f ../schemas/flatmath.fbs \
		-o ../include/flatmath/flatmath_schema \
		-n flatmath_schema

##---


fmt_flatbuffer_flatmath_headers:
	@clang-format -i ../include/flatmath/readonly/*_generated.h
	@clang-format -i ../include/flatmath/mutable/*_generated.h

# just being verbose
prn_flatmath_verbose:
	@echo "generating flatmath flatbuffers"

# rule to invoke
gen_flatmath_flatbuffers: \
	prn_flatmath_verbose \
	gen_flatbuffer_flatmath_headers \
	gen_flatbuffer_flatmath_schema_headers \
	;
