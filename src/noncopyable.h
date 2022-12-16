/**
 * @file Noncopyable.h
 * @author zpf (zpf001001@gmail.com)
 * @brief 不可拷贝对象封装
 * @version 0.1
 * @date 2022-12-16
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef __CHIXIAO_NONCOPYABLE_H__
#define __CHIXIAO_NONCOPYABLE_H__

namespace ChiXiao {

/**
 * @brief 对象无法拷贝、赋值
 *
 */
class Noncopyable
{
public:
    /**
     * @brief 默认构造函数
     *
     */
    Noncopyable() = default;
    /**
     * @brief 默认析构函数
     *
     */
    ~Noncopyable() = default;
    /**
     * @brief 拷贝构造函数(禁用)
     *
     */
    Noncopyable(const Noncopyable&) = delete;
    /**
     * @brief 赋值函数(禁用)
     *
     */
    Noncopyable& operator=(const Noncopyable&) = delete;
};

} // namespace ChiXiao

#endif