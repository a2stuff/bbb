;;; ------------------------------
;;; ProDOS MLI
;;; ------------------------------

;;; Entry point
MLI             := $BF00

;;; Date/Time
DATELO          := $BF90
DATEHI          := $BF91
TIMELO          := $BF92
TIMEHI          := $BF93

;;; Housekeeping Calls
CREATE          := $C0
DESTROY         := $C1
RENAME          := $C2
SET_FILE_INFO   := $C3
GET_FILE_INFO   := $C4
ON_LINE         := $C5
SET_PREFIX      := $C6
GET_PREFIX      := $C7
;;; Filing Calls
OPEN            := $C8
NEWLINE         := $C9
READ            := $CA
WRITE           := $CB
CLOSE           := $CC
FLUSH           := $CD
SET_MARK        := $CE
GET_MARK        := $CF
SET_EOF         := $D0
GET_EOF         := $D1
SET_BUF         := $D2
GET_BUF         := $D3
;;; System Calls
GET_TIME        := $82
ALLOC_INTERRUPT := $40
DEALLOC_INTERRUPT       := $41
QUIT            := $65
;;; Direct Disk Access Commands
READ_BLOCK      := $80
WRITE_BLOCK     := $71

;;; File Types
FT_TYPELESS     := $00
FT_BAD          := $01
FT_TEXT         := $04
FT_BINARY       := $06
FT_DIRECTORY    := $0F
FT_SRC          := $B0  ; IIgs system type; re-used?
FT_BASIC        := $FC
FT_SYSTEM       := $FF



;;; Macros
.macro  MLI_CALL    op, addr
        jsr MLI
        .byte op
        .addr addr
.endmacro