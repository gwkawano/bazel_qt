genrule(
    name = "app",
    srcs = [
        "//src/annotkit:main",
        "Info.plist",
    ],
    outs = [
        "HelloQt.app/Contents/MacOS/main",
        "HelloQt.app/Contents/Info.plist",
    ],
    cmd = "cp $(location //src/annotkit:main) $(location HelloQt.app/Contents/MacOS/main) && \
           cp $(location Info.plist) $(location HelloQt.app/Contents/Info.plist) && \
           chmod 0755 $(location HelloQt.app/Contents/MacOS/main) && \
           echo macdeployqt $(@D)/HelloQt.app"
)