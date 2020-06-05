cc_library(
    name = "qt_core",
    hdrs = glob(["QtCore/*"]),
    includes = ["."],
    linkopts = [
        "-framework QtCore",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "qt_widgets",
    hdrs = glob(["QtWidgets/*"]),
    includes = ["."],
    linkopts = [
        "-framework QtWidgets",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "qt_gui",
    hdrs = glob(["QtGui/*"]),
    includes = ["."],
    linkopts = [
        "-framework QtGui",
    ],
    visibility = ["//visibility:public"],
)