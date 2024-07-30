// WARNING: THIS FILE IS AUTOGENERATED! As such, it should not be edited.
// Edits need to be made to the proto files
// (see https://github.com/mavlink/MAVSDK-Proto/blob/main/protos/log_streaming/log_streaming.proto)

#pragma once

#include <array>
#include <cmath>
#include <functional>
#include <limits>
#include <memory>
#include <string>
#include <utility>
#include <vector>

#include "plugin_base.h"

#include "handle.h"

namespace mavsdk {

class System;
class LogStreamingImpl;

/**
 * @brief Provide log streaming data.
 */
class LogStreaming : public PluginBase {
public:
    /**
     * @brief Constructor. Creates the plugin for a specific System.
     *
     * The plugin is typically created as shown below:
     *
     *     ```cpp
     *     auto log_streaming = LogStreaming(system);
     *     ```
     *
     * @param system The specific system associated with this plugin.
     */
    explicit LogStreaming(System& system); // deprecated

    /**
     * @brief Constructor. Creates the plugin for a specific System.
     *
     * The plugin is typically created as shown below:
     *
     *     ```cpp
     *     auto log_streaming = LogStreaming(system);
     *     ```
     *
     * @param system The specific system associated with this plugin.
     */
    explicit LogStreaming(std::shared_ptr<System> system); // new

    /**
     * @brief Destructor (internal use only).
     */
    ~LogStreaming() override;

    /**
     * @brief Raw logging data type
     */
    struct LogStreamingRaw {
        std::string data_base64{}; /**< @brief Ulog file stream data encoded as base64 */
    };

    /**
     * @brief Equal operator to compare two `LogStreaming::LogStreamingRaw` objects.
     *
     * @return `true` if items are equal.
     */
    friend bool
    operator==(const LogStreaming::LogStreamingRaw& lhs, const LogStreaming::LogStreamingRaw& rhs);

    /**
     * @brief Stream operator to print information about a `LogStreaming::LogStreamingRaw`.
     *
     * @return A reference to the stream.
     */
    friend std::ostream&
    operator<<(std::ostream& str, LogStreaming::LogStreamingRaw const& log_streaming_raw);

    /**
     * @brief Possible results returned for logging requests
     */
    enum class Result {
        Success, /**< @brief Request succeeded. */
        NoSystem, /**< @brief No system connected. */
        ConnectionError, /**< @brief Connection error. */
        Busy, /**< @brief System busy. */
        CommandDenied, /**< @brief Command denied. */
        Timeout, /**< @brief Timeout. */
        Unsupported, /**< @brief Unsupported. */
        Unknown, /**< @brief Unknown error. */
    };

    /**
     * @brief Stream operator to print information about a `LogStreaming::Result`.
     *
     * @return A reference to the stream.
     */
    friend std::ostream& operator<<(std::ostream& str, LogStreaming::Result const& result);

    /**
     * @brief Callback type for asynchronous LogStreaming calls.
     */
    using ResultCallback = std::function<void(Result)>;

    /**
     * @brief Start streaming logging data.
     *
     * This function is non-blocking. See 'start_log_streaming' for the blocking counterpart.
     */
    void start_log_streaming_async(const ResultCallback callback);

    /**
     * @brief Start streaming logging data.
     *
     * This function is blocking. See 'start_log_streaming_async' for the non-blocking counterpart.
     *
     * @return Result of request.
     */
    Result start_log_streaming() const;

    /**
     * @brief Stop streaming logging data.
     *
     * This function is non-blocking. See 'stop_log_streaming' for the blocking counterpart.
     */
    void stop_log_streaming_async(const ResultCallback callback);

    /**
     * @brief Stop streaming logging data.
     *
     * This function is blocking. See 'stop_log_streaming_async' for the non-blocking counterpart.
     *
     * @return Result of request.
     */
    Result stop_log_streaming() const;

    /**
     * @brief Callback type for subscribe_log_streaming_raw.
     */
    using LogStreamingRawCallback = std::function<void(LogStreamingRaw)>;

    /**
     * @brief Handle type for subscribe_log_streaming_raw.
     */
    using LogStreamingRawHandle = Handle<LogStreamingRaw>;

    /**
     * @brief Subscribe to logging messages
     */
    LogStreamingRawHandle subscribe_log_streaming_raw(const LogStreamingRawCallback& callback);

    /**
     * @brief Unsubscribe from subscribe_log_streaming_raw
     */
    void unsubscribe_log_streaming_raw(LogStreamingRawHandle handle);

    /**
     * @brief Copy constructor.
     */
    LogStreaming(const LogStreaming& other);

    /**
     * @brief Equality operator (object is not copyable).
     */
    const LogStreaming& operator=(const LogStreaming&) = delete;

private:
    /** @private Underlying implementation, set at instantiation */
    std::unique_ptr<LogStreamingImpl> _impl;
};

} // namespace mavsdk