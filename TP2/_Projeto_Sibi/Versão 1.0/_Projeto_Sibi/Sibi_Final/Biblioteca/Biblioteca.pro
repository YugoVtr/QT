#-------------------------------------------------
#
# Project created by QtCreator 2016-12-03T14:59:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Biblioteca
TEMPLATE = app


SOURCES += main.cpp\
        frmJanelaPrincipal.cpp \
    frmCad_Editora.cpp \
    Editora.cpp \
    EditoraPersistencia.cpp \
    Autor.cpp \
    AutorPersistencia.cpp \
    frmCad_Autor.cpp \
    Livro.cpp \
    LivroPersistencia.cpp \
    frmCad_Livro.cpp \
    LivroAutor.cpp \
    LivroAutorPersistencia.cpp \
    LivroEditora.cpp \
    LivroEditoraPersistencia.cpp \
    Revista.cpp \
    RevistaPersistencia.cpp \
    frmCad_Revista.cpp \
    frmCosultaAutor.cpp \
    frmConsultaEditora.cpp \
    frmConsultaLivro.cpp \
    frmConsultaRevista.cpp\
    Artigo.cpp\
    ArtigoAutor.cpp\
    ArtigoAutorPersistencia.cpp\
    frmCad_Artigo.cpp\
    frmCad_Video.cpp\
    frmConsultaArtigo.cpp\
    frmConsultaVideo.cpp\
    Video.cpp\
    VideoPersistencia.cpp\
    ArtigoPersistencia.cpp\
    CadastroUsuario.cpp\
    Telefone.cpp\
    Endereco.cpp \
    Usuario.cpp \
    CadastroTelefone.cpp \
    Telefone_Persistencia.cpp \
    CadastroEndereco.cpp \
    Endereco_Persistencia.cpp \
    Usuario_Persistencia.cpp \
    ListarUsuario.cpp \
    ListarTelefone.cpp \
    ListarEndereco.cpp \
    Codigo.cpp \
    Exemplar.cpp \
    ExemplarPersistencia.cpp \
    frmConsultaExemplar.cpp \
    Multa.cpp \
    MultaPersistencia.cpp \
    Emprestimo.cpp\
    Emprestimo_Persistencia.cpp\
    frmConsultaAcervo.cpp \
    Reserva.cpp \
    PersistirReserva.cpp \
    frmReserva.cpp
	

HEADERS  += frmJanelaPrincipal.h \
    frmCad_Editora.h \
    Crud.h \
    Editora.h \
    EditoraPersistencia.h \
    Autor.h \
    AutorPersistencia.h \
    frmCad_Autor.h \
    Livro.h \
    LivroPersistencia.h \
    frmCad_Livro.h \
    LivroAutor.h \
    LivroAutorPersistencia.h \
    LivroEditora.h \
    LivroEditoraPersistencia.h \
    Revista.h \
    RevistaPersistencia.h \
    frmCad_Revista.h \
    frmCosultaAutor.h \
    frmConsultaEditora.h \
    frmConsultaLivro.h \
    frmConsultaRevista.h \
    ITransformarDados.h\
    Artigo.h\
    ArtigoAutor.h\
    ArtigoAutorPersistencia.h\
    ArtigoPersistencia.h\
    frmCad_Artigo.h\
    frmCad_Video.h\
    frmConsultaArtigo.h\
    frmConsultaVideo.h\
    Video.h\
    VideoPersistencia.h\
    Telefone.h\
    Endereco.h \
    Usuario.h \
    CadastroTelefone.h \
    Telefone_Persistencia.h \
    CadastroEndereco.h \
    Endereco_Persistencia.h \
    Usuario_Persistencia.h \
    ListarUsuario.h \
    ListarTelefone.h \
    ListarEndereco.h \
    CadastroUsuario.h \
    Codigo.h \
    Exemplar.h \
    ExemplarPersistencia.h \
    frmConsultaExemplar.h \
    Multa.h \
    MultaPersistencia.h \
    Emprestimo.h \
    Emprestimo_Persistencia.h\
    frmConsultaAcervo.h \
    Reserva.h \
    PersistirReserva.h \
    frmReserva.h

FORMS    += frmJanelaPrincipal.ui \
    frmCad_Editora.ui \
    frmCad_Autor.ui \
    frmCad_Livro.ui \
    frmCad_Revista.ui \
    frmCosultaAutor.ui \
    frmConsultaEditora.ui \
    frmConsultaLivro.ui \
    frmConsultaRevista.ui\
    frmCad_Artigo.ui\
    frmCad_Video.ui\
    frmConsultaArtigo.ui\
    frmConsultaVideo.ui\
    CadastroUsuario.ui\
    CadastroTelefone.ui \
    CadastroEndereco.ui \
    ListarUsuario.ui \
    ListarTelefone.ui \
    ListarEndereco.ui \
    frmConsultaExemplar.ui\
    frmConsultaAcervo.ui \
    frmReserva.ui

RESOURCES += \
    arquivos.qrc

