//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: osa.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

#pragma once

#ifdef isset
#undef isset
#endif

#if defined(__clang__)
#pragma clang system_header
#elif defined(__GNUC__)
#pragma GCC system_header
#elif defined(_MSC_VER)
#pragma system_header
#endif

#include "fbe_protocol.h"

#include "osa_models.h"

namespace FBE {

namespace osa {

// Fast Binary Encoding osa protocol version
struct ProtocolVersion
{
    // Protocol major version
    static const int major = 0;
    // Protocol minor version
    static const int minor = 0;
};

// Fast Binary Encoding osa sender
class Sender : public virtual FBE::Sender
{
public:
    Sender()
    {}
    Sender(const Sender&) = delete;
    Sender(Sender&&) noexcept = delete;
    virtual ~Sender() = default;

    Sender& operator=(const Sender&) = delete;
    Sender& operator=(Sender&&) noexcept = delete;

public:
    // Sender models accessors
};

// Fast Binary Encoding osa receiver
class Receiver : public virtual FBE::Receiver
{
public:
    Receiver() {}
    Receiver(const Receiver&) = delete;
    Receiver(Receiver&&) = delete;
    virtual ~Receiver() = default;

    Receiver& operator=(const Receiver&) = delete;
    Receiver& operator=(Receiver&&) = delete;

protected:
    // Receive handlers

    // Receive message handler
    bool onReceive(size_t type, const void* data, size_t size) override;

private:
    // Receiver values accessors

    // Receiver models accessors
};

// Fast Binary Encoding osa proxy
class Proxy : public virtual FBE::Receiver
{
public:
    Proxy() {}
    Proxy(const Proxy&) = delete;
    Proxy(Proxy&&) = delete;
    virtual ~Proxy() = default;

    Proxy& operator=(const Proxy&) = delete;
    Proxy& operator=(Proxy&&) = delete;

protected:
    // Proxy handlers

    // Receive message handler
    bool onReceive(size_t type, const void* data, size_t size) override;

private:
    // Proxy models accessors
};

// Fast Binary Encoding osa client
class Client : public virtual Sender, protected virtual Receiver
{
public:
    Client() = default;
    Client(const Client&) = delete;
    Client(Client&&) = delete;
    virtual ~Client() = default;

    Client& operator=(const Client&) = delete;
    Client& operator=(Client&&) = delete;

    // Reset client buffers
    void reset() { std::scoped_lock locker(this->_lock); reset_requests(); }

    // Watchdog for timeouts
    void watchdog(uint64_t utc) { std::scoped_lock locker(this->_lock); watchdog_requests(utc); }


protected:
    std::mutex _lock;
    uint64_t _timestamp{0};

    // Reset client requests
    virtual void reset_requests();

    // Watchdog client requests for timeouts
    virtual void watchdog_requests(uint64_t utc);
};

} // namespace osa

} // namespace FBE