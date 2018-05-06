#include <uWS/uWS.h>
#include <reactphysics3d.h>

int main() {
    uWS::Hub h;
    rp3d::CollisionWorld world;
    std::string resp = "Hello!";

    h.onMessage([](uWS::WebSocket<uWS::SERVER> *ws, char *message, size_t length, uWS::OpCode opCode) {
        ws->send(message, length, opCode);
    });

    h.onHttpRequest([&](uWS::HttpResponse *res, uWS::HttpRequest req, char *data, size_t length,
                        size_t remainingBytes) {
        res->end(resp.data(), resp.size());
    });

    if (h.listen(3000)) {
        h.run();
    }

    return 0;
}
