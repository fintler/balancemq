AC_PREREQ([2.61])
AC_INIT([BalanceMQ],[0.0.1],[jon@bringhurst.org],[BalanceMQ],[http://www.balancemq.com/])

AC_LANG_CONFTEST(
   [AC_LANG_SOURCE([[const char hw[] = "Hello, World\n";]])])

# Keep artifacts in directories as much as possible.
AC_CONFIG_AUX_DIR(auxdir)
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_HEADERS([config.h])

AM_INIT_AUTOMAKE([foreign])
m4_ifdef([AM_SILENT_RULES], [AM_SILENT_RULES([yes])])

# Pull in libtool
LT_PREREQ([2.2])
LT_INIT([dlopen])

# Check for programs
AC_PROG_AWK
AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_LEX
AC_PROG_MAKE_SET
AC_PROG_YACC
AC_PROG_CC_C_O

# Needed for docs
X_AC_BMQ_DOXYGEN

# Needed for tests
#X_AC_BMQ_CHECK

# Checks for headers.
AC_CHECK_HEADERS([inttypes.h limits.h stdint.h stdlib.h string.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_HEADER_STDBOOL
AC_TYPE_OFF_T
AC_TYPE_SIZE_T
AC_TYPE_SSIZE_T
AC_TYPE_UINT16_T
AC_TYPE_UINT32_T
AC_TYPE_UINT64_T

# Check for library functions.
AC_FUNC_MALLOC
AC_CHECK_FUNCS([memset realpath strerror])

# Check for libev.
AC_CHECK_HEADERS([ev.h], [], [AC_MSG_ERROR("ev.h not found")])
AC_CHECK_LIB([ev], [ev_time], [
	LIBS="-lev ${LIBS}"
	AC_DEFINE([HAVE_LIBEV], [1], [ev_time in -lev])
	], [AC_MSG_ERROR("libev not found")])

AC_CONFIG_FILES([Makefile                                              \
                 doc/Makefile                                          \
                 doc/man/Makefile                                      \
                 doc/man/man1/Makefile                                 \
                 etc/Makefile                                          \
                 etc/balancemq/Makefile                                \
                 examples/Makefile                                     \
                 examples/filesystem_treewalk/Makefile                 \
                 examples/filesystem_treewalk/c/Makefile               \
                 src/common/Makefile                                   \
                 src/Makefile                                          \
                 src/balancemqd/Makefile                               \
                 src/balancemqd/plugins/Makefile                       \
                 src/balancemqd/plugins/protocol/Makefile              \
                 src/balancemqd/plugins/protocol/posixmq/Makefile      \
                 src/balancemqd/plugins/protocol/stomp/Makefile        \
                 src/balancemqd/plugins/protocol/stomp/parser/Makefile \
                 src/balancemqctl/Makefile                             \
                 src/libbalancemq/Makefile                             \
                 src/libbalancemq/include/Makefile                     \
                 src/libbalancemq/include/balancemq/Makefile           \
                 src/libbalancemq/plugins/Makefile                     \
                 src/libbalancemq/plugins/auth/Makefile                \
                 src/libbalancemq/plugins/auth/munge/Makefile          \
                 src/libbalancemq/plugins/auth/none/Makefile           \
                 src/libbalancemq/plugins/protocol/Makefile            \
                 src/libbalancemq/plugins/protocol/asn_1/Makefile      \
                 src/libbalancemq/plugins/protocol/mpi/Makefile        \
                 src/libbalancemq/runtime/Makefile                     \
                 src/libbalancemq/runtime/plugin_loader/Makefile       \
                 src/libbalancemq/settings/Makefile                    \
])

AC_OUTPUT
