//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: osa.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

package osa.fbe;

// Fast Binary Encoding osa final sender
public class FinalSender extends fbe.Sender
{
    // Sender models accessors

    public FinalSender()
    {
        super(true);
    }
    public FinalSender(fbe.Buffer buffer)
    {
        super(buffer, true);
    }

    public long send(Object obj)
    {

        return 0;
    }


    // Send message handler
    @Override
    protected long onSend(byte[] buffer, long offset, long size) { throw new UnsupportedOperationException("osa.fbe.Sender.onSend() not implemented!"); }
}
