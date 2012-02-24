#include <QString>

class Response {
  public:
    Response(bool success, QString message);
    Response(bool success, QByteArray message, bool binary);
    Response(bool success);
    bool isSuccess() const;
    QByteArray message() const;

  private:
    bool m_success;
    QByteArray m_message;
};
