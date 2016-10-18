for (auto && ns : namespaces)
  for (auto && mb : mailboxes)
    ivs.mboxes.insert(std::make_pair(ns, mb));