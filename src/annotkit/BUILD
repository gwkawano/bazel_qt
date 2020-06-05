cc_binary(
    name = "main",
    srcs = ["bazel_qt.cc"],
    copts = [
        "-fPIC"
    ],
    deps = [
        "@qt//:qt_core",
        "@qt//:qt_widgets",
        "@qt//:qt_gui",
    ],
    visibility = ["//:__pkg__"],
)