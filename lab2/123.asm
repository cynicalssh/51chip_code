    ORG 0000H           ; �ӵ�ַ 0000H ��ʼ
START:
    MOV A, 20H          ; ���ڲ� RAM 20H �еļ�ֵ���ص� A
    CJNE A, #0EEH, CHECK_1  ; �ж��Ƿ�Ϊ 0EEH
    LJMP PRO1           ; ��ת�� PRO1
CHECK_1:
    CJNE A, #0DEH, CHECK_2  ; �ж��Ƿ�Ϊ 0DEH
    LJMP PRO2           ; ��ת�� PRO2
CHECK_2:
    CJNE A, #0BEH, CHECK_3  ; �ж��Ƿ�Ϊ 0BEH
    LJMP PRO3           ; ��ת�� PRO3
CHECK_3:
    CJNE A, #07EH, CHECK_4  ; �ж��Ƿ�Ϊ 07EH
    LJMP PRO4           ; ��ת�� PRO4
CHECK_4:
    CJNE A, #0EDH, CHECK_5  ; �ж��Ƿ�Ϊ 0EDH
    LJMP PRO5           ; ��ת�� PRO5
CHECK_5:
    CJNE A, #0DDH, END_PROGRAM  ; �ж��Ƿ�Ϊ 0DDH
    LJMP PRO6           ; ��ת�� PRO6
END_PROGRAM:
    NOP                 ; �������

PRO1:                   ; ���� PRO1
    ; ����д PRO1 �εĴ���
    RET                 ; ִ����Ϸ���

PRO2:                   ; ���� PRO2
    ; ����д PRO2 �εĴ���
    RET

PRO3:                   ; ���� PRO3
    ; ����д PRO3 �εĴ���
    RET

PRO4:                   ; ���� PRO4
    ; ����д PRO4 �εĴ���
    RET

PRO5:                   ; ���� PRO5
    ; ����д PRO5 �εĴ���
    RET

PRO6:                   ; ���� PRO6
    ; ����д PRO6 �εĴ���
    RET

    END                 ; �������
