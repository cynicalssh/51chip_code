    ORG 0000H           ; 从地址 0000H 开始
START:
    MOV A, 20H          ; 将内部 RAM 20H 中的键值加载到 A
    CJNE A, #0EEH, CHECK_1  ; 判断是否为 0EEH
    LJMP PRO1           ; 跳转到 PRO1
CHECK_1:
    CJNE A, #0DEH, CHECK_2  ; 判断是否为 0DEH
    LJMP PRO2           ; 跳转到 PRO2
CHECK_2:
    CJNE A, #0BEH, CHECK_3  ; 判断是否为 0BEH
    LJMP PRO3           ; 跳转到 PRO3
CHECK_3:
    CJNE A, #07EH, CHECK_4  ; 判断是否为 07EH
    LJMP PRO4           ; 跳转到 PRO4
CHECK_4:
    CJNE A, #0EDH, CHECK_5  ; 判断是否为 0EDH
    LJMP PRO5           ; 跳转到 PRO5
CHECK_5:
    CJNE A, #0DDH, END_PROGRAM  ; 判断是否为 0DDH
    LJMP PRO6           ; 跳转到 PRO6
END_PROGRAM:
    NOP                 ; 程序结束

PRO1:                   ; 定义 PRO1
    ; 这里写 PRO1 段的代码
    RET                 ; 执行完毕返回

PRO2:                   ; 定义 PRO2
    ; 这里写 PRO2 段的代码
    RET

PRO3:                   ; 定义 PRO3
    ; 这里写 PRO3 段的代码
    RET

PRO4:                   ; 定义 PRO4
    ; 这里写 PRO4 段的代码
    RET

PRO5:                   ; 定义 PRO5
    ; 这里写 PRO5 段的代码
    RET

PRO6:                   ; 定义 PRO6
    ; 这里写 PRO6 段的代码
    RET

    END                 ; 程序结束
