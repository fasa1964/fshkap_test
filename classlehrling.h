#ifndef CLASSLEHRLING_H
#define CLASSLEHRLING_H

#include <QString>
#include <QDate>
#include <QDataStream>

class ClassLehrling
{
public:
    ClassLehrling();

    int nr() const;
    void setNr(int nr);

    QString vorname() const;
    void setVorname(const QString &vorname);

    QString nachname() const;
    void setNachname(const QString &nachname);

    QString strasse() const;
    void setStrasse(const QString &strasse);

    QString ort() const;
    void setOrt(const QString &ort);

    QString telefon() const;
    void setTelefon(const QString &telefon);

    QDate gebDatum() const;
    void setGebDatum(const QDate &gebDatum);

    QDate ausbildungsDatum() const;
    void setAusbildungsDatum(const QDate &ausbildungsDatum);

    QString klasse() const;
    void setKlasse(const QString &klasse);

    QString betrieb() const;
    void setBetrieb(const QString &betrieb);

    QString notiz() const;
    void setNotiz(const QString &notiz);

    bool isValid();
    QString getKey() const;

private:
    int m_nr;
    QString m_vorname;
    QString m_nachname;
    QString m_strasse;
    QString m_ort;
    QString m_telefon;
    QDate m_gebDatum;
    QDate m_ausbildungsDatum;
    QString m_klasse;
    QString m_betrieb;
    QString m_notiz;

};

QDataStream &operator<<(QDataStream &out, const ClassLehrling &dat);
QDataStream &operator>>(QDataStream &in, ClassLehrling &dat);

#endif // CLASSLEHRLING_H
