#pragma once

#include "ThreadCommand.hpp"

#include <godot_cpp/classes/image.hpp>

namespace Xenu
{
class Wrapper;

class ThreadCommandCreateTexture : public ThreadCommand
{
public:
    ThreadCommandCreateTexture(Wrapper* wrapper, godot::Image::Format image_format, godot::PackedByteArray pixel_data, int32_t width, int32_t height, bool flip_y, uint32_t field);
    ~ThreadCommandCreateTexture() override = default;

    void Execute() override;

private:
    Wrapper* m_wrapper;
    godot::Image::Format m_imageFormat;
    godot::PackedByteArray m_pixelData;
    int32_t m_width;
    int32_t m_height;
    bool m_flipY;
    uint32_t m_field;
};
}
